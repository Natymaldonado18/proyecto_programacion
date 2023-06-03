#include <stdio.h>

int acuerdo_tratamiento_de_datos, opción_menu_principal; 

int main (){
    // Establecimiento de acuerdo de tratamiento de datos personales //
    printf (".....................................................................................................................................");
    printf ("ACUERDO DE TRATAMIENTO DE DATOS:\n" );
    printf ("La Fundacion Salud Para Todos basa el tratamiento de datos de sus usuarios bajo la Ley de Proteccion de Datos Personales instaurada en 2021 en el Ecuador." );
    printf ("\n");
    printf ("Por ello, es fundamental conocer si se encuentra o no de acuerdo que la fundacion maneje sus datos personales rigiendose en la LOPDP\n");
    printf (".....................................................................................................................................");
    printf ("\n");
    printf ("\nPor favor digite la opcion que se aducue a su opinion:\n");
    printf ("1.- Si estoy de acuerdo   --   2.- No estoy de acuerdo\n");
    scanf  ("%d", & acuerdo_tratamiento_de_datos);

}