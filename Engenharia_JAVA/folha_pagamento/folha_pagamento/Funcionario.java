package folha_pagamento;

public class Funcionario
{
    private String nome;
    private String cpf;
    private String telefone;
    private String email;

    Funcionario()
    {
        this.nome = "nome";
        this.cpf = "cpf";
        this.telefone = "telefone";
        this.email = "email";
    }

    public void setNome(String nome)
    {
        if (nome == null || nome.isBlank())
        {
            throw new IllegalArgumentException("O nome não pode ser nulo ou em branco.");
        } else
        {
            this.nome = nome;
        }
    }
    public void setCpf(String cpf)
    {
        if (cpf == null || cpf.isBlank())
        {
            throw new IllegalArgumentException("O cpf não pode ser nulo ou em branco.");
        } else
        {
            this.cpf = cpf;
        }
    }
    public void setTelefone(String telefone)
    {
        if (telefone == null || telefone.isBlank())
        {
            throw new IllegalArgumentException("O telefone não pode ser nulo ou em branco.");
        } else
        {

            this.telefone = telefone;
        }
    }
    public void setEmail(String email)
    {
        if (email == null || email.isBlank())
        {
            throw new IllegalArgumentException("O email não pode ser nulo ou em branco.");
        } else
        {
            this.email = email;
        }
    }

    public String getNome()
    {
        return this.nome;
    }
    public String getCpf()
    {
        return this.cpf;
    }
    public String getTelefone()
    {
        return this.telefone;
    }
    public String getEmail()
    {
        return this.email;
    }
}
