#include<iostream>

/* Prototypes des fonctions */

size_t LongueurChaine(const char* chaine);

void CopierChaine(char* destination, const char* source);

void ConcatenerChaines(char* destination, const char* source);

char* TrouverCaractere(const char* chaine, char caractere);

size_t CompterOccurrences(const char* chaine, char caractere);




int ComparerChaines(const char* chaine1, const char* chaine2);

void ConvertirMinuscules(char* chaine);

bool EstChaineNumerique(const char* chaine);

int main()
{
  std::cout << "=== TEST DES FONCTIONS DE MANIPULATION DE CHAINES STYLE C ===" << std::endl;
    std::cout << "Compile avec C++ et CLang++" << std::endl << std::endl;
    
    // Test 1: Longueur de chaîne
    char message[] = "Bonjour le monde";
    std::cout << "1. Longueur de '" << message << "': " << LongueurChaine(message) << std::endl;
    
    // Test 2: Copie de chaîne
    char copie[50];
    CopierChaine(copie, message);
    std::cout << "2. Copie: '" << copie << "'" << std::endl;
    
    // Test 3: Concatenation
    char salutation[100] = "Hello ";
    ConcatenerChaines(salutation, "World!");
    std::cout << "3. Concatenation: '" << salutation << "'" << std::endl;
    
    // Test 4: Recherche de caractere
    char* position = TrouverCaractere(message, 'j');
    if (position != nullptr) {
        std::cout << "4. Caractere 'j' trouve a la position: " << (position - message) << std::endl;
    } else {
        std::cout << "4. Caractere 'j' non trouve" << std::endl;
    }
    
    // Test 5: Comptage d'occurrences
    std::cout << "5. Occurrences de 'o' dans '" << message << "': " 
              << CompterOccurrences(message, 'o') << std::endl;
    
    // Test 6: Extraction de sous-chaine
    
    std::cout << "6. Sous-chaine (pos 3, longueur 5): '"<< "'" << std::endl;
    
    // Test 7: Division de chaine
    
    std::cout << "7. Division de '" << "':" << std::endl;
    
    
    // Test 8: Fonctions memoire
    
    std::cout << "8. Copie memoire (5 octets): '"<< std::endl;
    
    
    std::cout << "9. Initialisation memoire: '"<< std::endl;
    
    // Test 10: Comparaison de chaînes
    char chaineA[] = "apple";
    char chaineB[] = "banana";
    int resultat_comparaison = ComparerChaines(chaineA, chaineB);
    std::cout << "10. Comparaison '" << chaineA << "' vs '" << chaineB << "': " 
              << resultat_comparaison << std::endl;
    
    // Test 11: Conversion minuscules
    std::cout << "11."<< std::endl;
    

    // Test 12: Vérification numérique
    char numerique[] = "12345";
    char non_numerique[] = "12a45";
    std::cout << "12. '" << numerique << "' est numerique: " 
              << (EstChaineNumerique(numerique) ? "OUI" : "NON") << std::endl;
    std::cout << "    '" << non_numerique << "' est numerique: " 
              << (EstChaineNumerique(non_numerique) ? "OUI" : "NON") << std::endl;
    
    return 0;

}
// Initialisation des fonctions 

// Calcule la longueur d'une chaîne de caractères style C
size_t LongueurChaine(const char* chaine) {
    int i=0;

    while (chaine[i] != '\0') {
       i++;
    }
    return i;
}

// Copie une chaîne source dans une destination
void CopierChaine(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

//  Concatène deux chaînes : ajoute source à la fin de destination
void ConcatenerChaines(char* destination, const char* source) {
    int taille = LongueurChaine(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[taille + i] = source[i];
        i++;
    }
    destination[taille + i] = '\0';
}

// Recherche la première occurrence d'un caractère dans une chaîne
char* TrouverCaractere(const char* chaine, char caractere) {
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == caractere) {
            return (char*)(chaine + i);
        }
    }
    return nullptr;
}

// Compte le nombre d'occurrences d'un caractère dans une chaîne
size_t CompterOccurrences(const char* chaine, char caractere) {
    int i = 0;
    for (int j = 0; chaine[j] != '\0'; j++) {
        if (chaine[j] == caractere) {
            i++;
        }
    }
    return i;
}

//Copie un bloc mémoire d'une zone à une autre


// Remplit une zone mémoire avec une valeur spécifique


// Extrait une portion d'une chaîne


// Divise une chaîne en sous-chaînes selon un séparateur

    
   

// Compare deux chaînes de caractères lexicographiquement
int ComparerChaines(const char* chaine1, const char* chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

// Convertit une chaîne en minuscules (modifie la chaîne originale)
void ConvertirMinuscules(char* chaine) {}


// Vérifie si une chaîne représente un nombre entier
 bool EstChaineNumerique(const char* chaine) {
    // Vérifier si la chaîne est vide
    if (chaine[0] == '\0') {
        return false;
    }
    
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] < '0' || chaine[i] > '9') {
            return false;
        }
    }
    return true;
}