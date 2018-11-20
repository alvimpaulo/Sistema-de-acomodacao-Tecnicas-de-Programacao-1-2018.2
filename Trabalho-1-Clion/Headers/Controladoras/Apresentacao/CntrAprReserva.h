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
    void executar(Identificador &identificador) override;
    void setCntrsServReserva(InterServReserva *cntrsServReserva) override;
    void cancelarReserva();
    void realizarReserva();
    void pesquisarReserva();
    virtual ~CntrAprReserva();
};


#endif //TRABALHO_1_CLION_CNTRAPRRESERVA_H
