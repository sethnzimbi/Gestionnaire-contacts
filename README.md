# Gestionnaire de contacts C++

Petit programme en C++ permettant de gérer une liste de contacts depuis la console.

L'utilisateur peut ajouter, afficher, rechercher et supprimer des contacts.

## Fonctionnalités

- Ajouter un contact
- Afficher tous les contacts enregistrés
- Rechercher un contact par son nom
- Supprimer un contact
- Gestion des erreurs de saisie
- Support des caractères accentués dans la console

## Aperçu du menu

```
--- Gestionnaire de contacts ---

1. Ajouter un contact
2. Afficher tous les contacts
3. Rechercher un contact
4. Supprimer un contact
5. Quitter

Votre choix :
```

## Exemple d'utilisation

Ajout d'un contact :

```
Nom : Jean Dupont
Téléphone : 0600000000
Email : jean@email.com

Contact ajouté avec succès !
```

Affichage :

```
--- Liste des contacts ---

1. Jean Dupont | Tél : 0600000000 | Email : jean@email.com
```

## Compilation

Avec g++ :

```bash
g++ contact.cpp -o contact
```

Lancer le programme :

Windows :

```bash
contact.exe
```

Linux/macOS :

```bash
./contact
```

## Concepts C++ utilisés

Ce projet permet de pratiquer :

- Les classes et objets
- Les constructeurs
- Les `vector`
- Les références (`&`)
- Les fonctions
- Les boucles et conditions
- La gestion des entrées utilisateur
- La suppression d'éléments dans un tableau dynamique

## Structure du projet

```
GestionnaireContacts/
│
├── contact.cpp
└── README.md
```

## Objectif du projet

Projet réalisé pour progresser en C++ et mettre en pratique la création d'un programme interactif en console.
