#include <iostream>

///Fonction récursive calculant la suite u(n) tel que u(n+1) = u(n) + u(n-1)
int sequence(int now, int before, int n){
    ///condition d'arret de la récursivité
    if(n==1){}
    else{
        ///on fait un appel récursif avec les nouveau parametre
        ///on update les parametres avec les nouveaux parametre transmis a chaque fois
        return sequence(now + before,now,n-1);
    }
}