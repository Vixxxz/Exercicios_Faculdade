import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@ANoArgsConstructor

public class Produto
{
    private String nome;
    private long codigo;
    private String descricao;
    private double preco;
    private int qtd;
    private String categoria;
}