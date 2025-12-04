#include <iostream>
#include <vector>
#include <string>
#include <locale>   // pour setlocale

using namespace std;

// Classe Contact
class Contact {
public:
    string nom;
    string telephone;
    string email;

    Contact(string n, string t, string e)
        : nom(n), telephone(t), email(e) {
    }
};

// --- Fonctions du programme ---

void ajouterContact(vector<Contact>& contacts) {
    string nom, telephone, email;
    cin.ignore(); 

    cout << "Nom : ";
    getline(cin, nom);

    cout << "Téléphone : ";
    getline(cin, telephone);

    cout << "Email : ";
    getline(cin, email);

    contacts.push_back(Contact(nom, telephone, email));
    cout << "\nContact ajouté avec succès !\n";
}

void afficherContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "Aucun contact enregistré.\n";
        return;
    }

    cout << "\n--- Liste des contacts ---\n";
    for (size_t i = 0; i < contacts.size(); i++) {
        cout << i + 1 << ". "
            << contacts[i].nom
            << " | Tél : " << contacts[i].telephone
            << " | Email : " << contacts[i].email << endl;
    }
}

void rechercherContact(const vector<Contact>& contacts) {
    cin.ignore();

    string recherche;
    cout << "Entrez le nom à rechercher : ";
    getline(cin, recherche);

    for (const auto& c : contacts) {
        if (c.nom == recherche) {
            cout << "\nContact trouvé :\n";
            cout << "Nom : " << c.nom << endl;
            cout << "Téléphone : " << c.telephone << endl;
            cout << "Email : " << c.email << endl;
            return;
        }
    }

    cout << "Aucun contact trouvé avec ce nom.\n";
}

void supprimerContact(vector<Contact>& contacts) {
    int index;
    cout << "Numéro du contact à supprimer : ";
    cin >> index;

    // Vérification entrée invalide
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Entrée invalide.\n";
        return;
    }

    if (index < 1 || index >(int)contacts.size()) {
        cout << "Indice invalide.\n";
        return;
    }

    contacts.erase(contacts.begin() + (index - 1));
    cout << "Contact supprimé avec succès.\n";
}


int main() {
	// Permet de mettre les accents dans la console
    setlocale(LC_ALL, "");

    vector<Contact> contacts;
    int choix;

    do {
        cout << "\n--- Gestionnaire de contacts ---\n";
        cout << "1. Ajouter un contact\n";
        cout << "2. Afficher tous les contacts\n";
        cout << "3. Rechercher un contact\n";
        cout << "4. Supprimer un contact\n";
        cout << "5. Quitter\n";
        cout << "Votre choix : ";
        cin >> choix;

        // Gestion d'entrée invalide
        if (cin.fail()) {
            cin.clear();              // réinitialise l'état d'erreur
			cin.ignore(1000, '\n');   // vide le cache d'entrée
            cout << "Entrée invalide. Veuillez entrer un nombre.\n";
            continue;                 // retourne au début de la boucle
        }

        switch (choix) {
        case 1:
            ajouterContact(contacts);
            break;
        case 2:
            afficherContacts(contacts);
            break;
        case 3:
            rechercherContact(contacts);
            break;
        case 4:
            supprimerContact(contacts);
            break;
        case 5:
            cout << "Au revoir !\n";
            break;
        default:
            cout << "Choix invalide.\n";
        }

    } while (choix != 5);

    return 0;
}

