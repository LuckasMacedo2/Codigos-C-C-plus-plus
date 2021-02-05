#ifndef TEMPLATE_H
#define TEMPLATE_H

template <class tipo>//vai trocar todos os tipo pelo tipo já definido


class Pilha{
private:
    tipo *vetor;
    int tam;
    int final;
public:
    bool pilhaCheia ();

};

template <class tipo>
Pilha <tipo> :: pilhaCheia (){
    return (tam==final);
}

#endif // TEMPLATE_H
