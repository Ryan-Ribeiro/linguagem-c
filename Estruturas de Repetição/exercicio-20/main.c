
#include <stdio.h>

int
main ()
{
    
  float rendaPessoal = 1;
  float percentOutrasDespesas;
  int rendaPessoalMaior;
  int totalAlunos;

      printf ("Quantidade de alunos na universidade: ");
      scanf ("%d", &totalAlunos);
  while (rendaPessoal != 0)
    {
      for (int aluno = 0; aluno < totalAlunos; aluno++)
	{
	  printf ("Digite a renda pessoal do aluno: ");
	  scanf ("%f", &rendaPessoal);
	  
	  if (rendaPessoal == 0)
	  break;

	  float rendaFamiliar;
	  printf ("Digite a renda familiar do aluno: ");
	  scanf ("%f", &rendaFamiliar);

	  if (rendaPessoal > rendaFamiliar)
	    {
	      rendaPessoalMaior += 1;
	    }

	  printf ("Digite o total gasto com alimentacao: ");
	  float totalAlimentacao;
	  scanf ("%f", &totalAlimentacao);

	  printf ("Digite o total gasto com outras despesas: ");
	  float totalOutrasDespesas;
	  scanf ("%f", &totalOutrasDespesas);
	  if (totalOutrasDespesas > 200)
	    percentOutrasDespesas = percentOutrasDespesas + 1;

	  float percent =
	    totalAlimentacao + totalOutrasDespesas * 100 / (rendaPessoal +
							    rendaFamiliar);
	  printf
	    ("PORCENTAGEM GASTA COM ALIMENTACAO E OUTRAS DESPESAS EM RELACAO A RENDA PESSOAL E FAMILIAR: %.2f \n",
	     percent);
	}
    }


  percentOutrasDespesas = percentOutrasDespesas / totalAlunos;
  percentOutrasDespesas = percentOutrasDespesas * 100;
  printf
    ("PORCENTAGEM DE ALUNOS QUE GASTAM MAIS DE 200 REAIS EM OUTRAS DESPESAS: %.2f \n",
     percentOutrasDespesas);
  printf ("QUANTIDADE DE ALUNOS COM RENDA PESSOAL MAIOR QUE A FAMILIAR: %d",
	  rendaPessoalMaior);

  return 0;
}
