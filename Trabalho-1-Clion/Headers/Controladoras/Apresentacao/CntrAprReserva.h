//
// Created by paulo on 16-Nov-18.
//

#ifndef TRABALHO_1_CLION_CNTRAPRRESERVA_H
#define TRABALHO_1_CLION_CNTRAPRRESERVA_H


#include "../../Interfaces/Apresentacao/InterAprReserva.h"

class CntrAprReserva: public InterAprReserva {
private:
protected:
public:
    CntrAprReserva();
    void executar(Identificador &identificador);
    void setCntrsServReserva(InterServReserva *cntrsServReserva);
    void cancelarReserva();
    void realizarReserva();
    void pesquisarReserva();
    virtual ~CntrAprReserva();
};


#endif //TRABALHO_1_CLION_CNTRAPRRESERVA_H
