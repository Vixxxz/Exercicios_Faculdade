package folha_pagamento;
import javax.swing.*;

public class Main
{
    public static void main(String[] args)
    {
        Departamento departamento = new Departamento();
        int qtdFuncionarios = 0, continua = 0;
        do {
            int menu = Integer.parseInt(JOptionPane.showInputDialog("1: para inserir funcionario CLT \n 2: para inserir funcionario PJ \n 3: para exibir os funcionarios CLT \n 4: para exibir os funcionarios PJ \n 5: para exibir todos os funcionarios"));
            switch (menu) {
                case 1: {
                    qtdFuncionarios = Integer.parseInt(JOptionPane.showInputDialog("quantos funcionarios deseja inserir?"));
                    for (int i = 0; i < qtdFuncionarios; i++) {
                        CLT funcionarioCLT = new CLT();
                        String nomeCLT = JOptionPane.showInputDialog("Insira o nome do funcionario CLT");
                        funcionarioCLT.setNome(nomeCLT);
                        String cpfCLT = JOptionPane.showInputDialog("Insira o cpf do funcionario CLT");
                        funcionarioCLT.setCpf(cpfCLT);
                        String telefoneCLT = JOptionPane.showInputDialog("Insira o telefone do funcionario CLT");
                        funcionarioCLT.setTelefone(telefoneCLT);
                        String emailCLT = JOptionPane.showInputDialog("Insira o email do funcionario CLT");
                        funcionarioCLT.setEmail(emailCLT);
                        double salario = Double.parseDouble(JOptionPane.showInputDialog("Insira o salario do funcionario CLT"));
                        funcionarioCLT.setSalarioBase(salario);
                        departamento.incluirFuncionarioCLT(funcionarioCLT);
                    }
                    break;
                }
                case 2: {
                    qtdFuncionarios = Integer.parseInt(JOptionPane.showInputDialog("quantos funcionarios deseja inserir?"));
                    for (int i = 0; i < qtdFuncionarios; i++) {
                        PJ funcionarioPJ = new PJ();
                        String nomePJ = JOptionPane.showInputDialog("Insira o nome do funcionario CLT");
                        funcionarioPJ.setNome(nomePJ);
                        String cpfPJ = JOptionPane.showInputDialog("Insira o cpf do funcionario CLT");
                        funcionarioPJ.setCpf(cpfPJ);
                        String telefonePJ = JOptionPane.showInputDialog("Insira o telefone do funcionario CLT");
                        funcionarioPJ.setTelefone(telefonePJ);
                        String emailPJ = JOptionPane.showInputDialog("Insira o email do funcionario CLT");
                        funcionarioPJ.setEmail(emailPJ);
                        int horasTrabalhadas = Integer.parseInt(JOptionPane.showInputDialog("Insira a quantidade de horas trabalhadas do funcionario PJ"));
                        funcionarioPJ.setHorasTrabalhadas(horasTrabalhadas);
                        double valorHora = Double.parseDouble(JOptionPane.showInputDialog("Insira o valor da hora do funcionario PJ"));
                        funcionarioPJ.setValorHora(valorHora);
                        departamento.incluirFuncionarioPJ(funcionarioPJ);

                    }
                    break;
                }
                case 3: {
                    for (CLT i : departamento.getFuncionariosCLT()) {
                        JOptionPane.showMessageDialog(null, "Funcionario CLT: \nnome: " + i.getNome() + "\ncpf: " + i.getCpf() + "\ntelefone: " + i.getTelefone() + "\nemail: " + i.getEmail());
                    }
                    break;
                }
                case 4: {
                    for (PJ i : departamento.getFuncionariosPJ()) {
                        JOptionPane.showMessageDialog(null, "Funcionario PJ: \nnome: " + i.getNome() + "\ncpf: " + i.getCpf() + "\ntelefone: " + i.getTelefone() + "\nemail: " + i.getEmail() + "\nhoras trabalhadas: "
                        + i.getHorasTrabalhadas() + "\nvalor da hora: " + i.getValorHora() + "\nsalario: " + i.calcularSalario());
                    }
                    break;
                }
                case 5: {
                    for (PJ i : departamento.getFuncionariosPJ()) {
                        JOptionPane.showMessageDialog(null, "Funcionario PJ: \nnome: " + i.getNome() + "\ncpf: " + i.getCpf() + "\ntelefone: " + i.getTelefone() + "\nemail: " + i.getEmail() + "\nhoras trabalhadas: "
                                + i.getHorasTrabalhadas() + "\nvalor da hora: " + i.getValorHora() + "\nsalario: " + i.calcularSalario());
                    }
                    for (CLT i : departamento.getFuncionariosCLT()) {
                        JOptionPane.showMessageDialog(null, "\n\nFuncionario CLT: \nnome: " + i.getNome() + "\ncpf: " + i.getCpf() + "\ntelefone: " + i.getTelefone() + "\nemail: " + i.getEmail());
                    }
                    break;
                }
            }
            continua = Integer.parseInt(JOptionPane.showInputDialog("1: para continuar \n 2: para sair"));
        }while (continua == 1);
    }
}
