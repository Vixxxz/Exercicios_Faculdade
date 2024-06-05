package folha_pagamento;
import java.util.ArrayList;
import java.util.List;

public class Departamento
{
    Departamento()
    {
        this.funcionarios = new ArrayList<>();
        this.funcionariosCLT = new ArrayList<>();
        this.funcionariosPJ = new ArrayList<>();
    }
    private List<Funcionario> funcionarios = new ArrayList<>();
    private List<CLT> funcionariosCLT = new ArrayList<>();
    private List<PJ> funcionariosPJ = new ArrayList<>();

    public void incluirFuncionarioCLT(CLT funcionario)
    {
        funcionariosCLT.add(funcionario);
    }

    public void incluirFuncionarioPJ(PJ funcionario)
    {
        funcionariosPJ.add(funcionario);
    }

    public List<CLT> getFuncionariosCLT()
    {
        return new ArrayList<>(funcionariosCLT);
    }
    public List<PJ> getFuncionariosPJ()
    {
        return new ArrayList<>(funcionariosPJ);
    }
}
