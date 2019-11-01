//---------------------------------------------------------------------------

#pragma hdrstop

#include "hash.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
int main()
{
    int op;
	lr = sizeof(struct registro);
    le = sizeof( struct encabezado);

    do
    {
        menu(); cin >> op;  cout << endl;

        switch(op)
        {
            case 1:
                escribir(); break;
            case 2:
                leer(); break;
            case 3:
                exit(0);
        }
        cout <<"\n\n ";
        system("pause"); system("cls");

    }while(op>0);


    return 0;
}
