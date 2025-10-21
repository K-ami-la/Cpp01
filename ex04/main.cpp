//aaaa.substr; aaa.find; aaaa.length: .. .close.
//std::ifstream(pour lire un fichier)
//std::ofstream(pour ecrire un fichier)
//std::string::find, substr, append

// 3 arguments: le nom du fichier a lire
// chaine a remplacer (s1)
// nouvelle chaine (s2)

//std::ifstream >> (input file stream = leture de fichier) -> is_open
//std::string content;  std::string line;

//lire le contenu du fichier (on veut tout le contenu dans une seule --> std::string) --> std::string content; std::string line; {}



// Inclusion des bibliothèques nécessaires
#include <iostream>   // pour afficher des messages (cout, cerr)
#include <fstream>    // pour lire et écrire dans des fichiers
#include <string>     // pour utiliser std::string

int main(int argc, char **argv)
{
    // Vérifie que le programme a reçu exactement 3 arguments :
    // ./sed_is_for_losers <filename> <s1> <s2>
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
        return 1; // quitte le programme avec une erreur
    }

    // Stocke les arguments dans des variables plus lisibles
    std::string filename = argv[1]; // nom du fichier à lire
    std::string s1 = argv[2];       // texte à remplacer
    std::string s2 = argv[3];       // texte de remplacement

    // Si s1 est vide, il faut refuser, sinon on crée une boucle infinie
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    // Ouvre le fichier d'entrée (en lecture)
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1; // erreur si le fichier n'existe pas ou n'est pas lisible
    }

    // On lit tout le contenu du fichier ligne par ligne
    std::string content; // contiendra tout le texte du fichier
    std::string line;    // pour stocker chaque ligne temporairement

    while (std::getline(infile, line)) // lit une ligne à la fois
    {
        content += line; // ajoute la ligne au contenu complet
        if (!infile.eof()) // si on n’est pas à la fin du fichier
            content += "\n"; // ajoute un retour à la ligne
    }

    infile.close(); // on ferme le fichier d'entrée (bonne pratique)

    // Maintenant, on va créer une nouvelle string avec les remplacements
    std::string newContent; // texte modifié
    size_t pos = 0;         // position actuelle dans la string
    size_t found;           // position de la prochaine occurrence de s1

    // Tant qu’on trouve s1 dans le texte
    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        // Ajoute la partie du texte avant s1
        newContent.append(content, pos, found - pos);

        // Ajoute s2 à la place de s1
        newContent.append(s2);

        // Continue la recherche après la fin de s1
        pos = found + s1.length();
    }

    // Ajoute la fin du texte après la dernière occurrence trouvée
    newContent.append(content, pos, std::string::npos);

    // Ouvre un nouveau fichier pour écrire le texte modifié
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create output file." << std::endl;
        return 1;
    }

    // Écrit le nouveau contenu dans le fichier de sortie
    outfile << newContent;

    // Ferme le fichier de sortie (toujours une bonne habitude)
    outfile.close();

    // Tout s’est bien passé, on retourne 0 (succès)
    return 0;
}
