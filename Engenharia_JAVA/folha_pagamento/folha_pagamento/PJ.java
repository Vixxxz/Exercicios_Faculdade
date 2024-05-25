package folha_pagamento;
public class PJ extends Funcionario
{
    private int horasTrabalhadas;
    private double valorHora;

    PJ()
    {
        this.horasTrabalhadas = 1;
        this.valorHora = 1;
    }
    public void setHorasTrabalhadas(int horasTrabalhadas)
    {
        if (horasTrabalhadas <= 0.0 || Double.isInfinite(horasTrabalhadas)) {
            throw new IllegalArgumentException("As horas trabalhadas não podem ser nulas, estar em branco ou ser menor que 1.");
        } else {
            this.horasTrabalhadas = horasTrabalhadas;
        }
    }
    public void setValorHora(double valorHora)
    {
        if (valorHora <= 0.0 || Double.isNaN(valorHora) || Double.isInfinite(valorHora)) {
            throw new IllegalArgumentException("O valor da hora não pode ser nulo, estar em branco ou ser menor que 1.");
        } else {
            this.valorHora = valorHora;
        }
    }
    public int getHorasTrabalhadas(){
        return horasTrabalhadas;
    }
    public double getValorHora(){
        return valorHora;
    }

    public double calcularSalario()
    {
        return horasTrabalhadas * valorHora;
    }
}
