#include <gtest/gtest.h>
#include "ManipulateurDeChaines.h"
#include "ChaineVideException.h"

/*
 * Exercices 3A
 * */
class ManipulateurDeChainesTest : public ::testing::Test {
    protected:
        // Vous pouvez ajouter des constantes ici
        const std::string CHAINE_VIDE = "";
        const std::string CHAINE_NON_VIDE = "Muppets";
        const std::string CHAINE_AVEC_ESPACES = "  Hello World !!! ";
};

TEST_F(ManipulateurDeChainesTest, EtantDonneChaineVide_QuandCompterCaracteres_AlorsLeResultatEstZero) {
    // Préparation
    std::string chaine = CHAINE_VIDE;

    // Action
    int nbCaracteres = ManipulateurDeChaines::compterCaracteres(chaine);

    // Validation
    EXPECT_EQ(nbCaracteres, 0);
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineNonVide_QuandCompterCaracteres_AlorsLeResultatEstLeBonNombreDeCaracteres) {
    // Préparation
    std::string chaine = CHAINE_NON_VIDE;

    // Action
    int nbCaracteres = ManipulateurDeChaines::compterCaracteres(CHAINE_NON_VIDE);

    // Validation
    EXPECT_GT(nbCaracteres, 0) << "La chaîne ne devrait pas être vide";
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineAvecEspaces_QuandSupprimerEspaces_AlorsLesEspacesSontSupprimes) {
    // Préparation
    std::string chaine = CHAINE_AVEC_ESPACES;

    // Action
    std::string chaineSansEspaces = ManipulateurDeChaines::enleverEspaces(chaine);

    // Validation
    EXPECT_FALSE(chaineSansEspaces.find(' ')) << "La chaîne ne devrait pas contenir d'espaces";
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineSansEspaces_QuandSupprimerEspaces_AlorsLaChaineResteInchangee) {
    // Préparation

    // Action

    // Validation
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineAvecMajuscules_QuandConvertirEnMinuscules_AlorsLaChaineEstConvertieEnMinuscules) {
    // Préparation

    // Action

    // Validation
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineEnMinuscules_QuandConvertirEnMinuscules_AlorsLaChaineResteInchangee) {
    // Préparation

    // Action

    // Validation
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineVide_QuandCompterNombreDeMots_AlorsExceptionEstLevee) {
    // Préparation

    // Action

    // Validation
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineAvecUnMot_QuandCompterNombreDeMots_AlorsLeCompteEstUn) {
    // Préparation

    // Action

    // Validation
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineAvecMotsSeparesParEspaces_QuandCompterNombreDeMots_AlorsLeCompteEstCorrect) {
    // Préparation

    // Action

    // Validation
}

// TODO: Écrire le test suivant avec le principe Préparation-Action-Validation
TEST_F(ManipulateurDeChainesTest, EtantDonneChaineAvecMotsSeparesParCaracteresSpeciaux_QuandCompterNombreDeMots_AlorsLeCompteEstCorrect) {
    // Préparation

    // Action

    // Validation
}
