package folha_pagamento;
public class CLT extends Funcionario
{
    private double salarioBase;

    CLT()
    {
        this.salarioBase = 0.1;
    }

    public void setSalarioBase(double salarioBase)
    {
        if (salarioBase <= 0.0 || Double.isNaN(salarioBase) || Double.isInfinite(salarioBase)) {
            throw new IllegalArgumentException("O cpf não pode ser nulo, estar em branco ou ser menor que 1.");
        } else {
            this.salarioBase = salarioBase;
        }
    }

    public double getSalarioBase()
    {
        return this.salarioBase;
    }
}
