#include <stdio.h>

int
main ()
{

  float pesoMedio;
  float idadeMedia;
  float maisPesado = 0;
  float maisJovem = 0;
  float pesoMedioTimes;
  float idadeMediaTimes;
  float cidade;
  float idade;
  float peso;

  for (cidade = 0; cidade < 5; cidade++)
    {
      for (peso = 0; peso < 3; peso++)
	{
	  float leia = 0;
	  printf ("Digite o peso do jogador %.0f: ", peso + 1);
	  scanf ("%f", &leia);

	  pesoMedio = pesoMedio + leia;
	  if (leia > maisPesado)
	    {
	      maisPesado = leia;
	    }



	  if (peso == 2)
	    {
	      printf ("O mais pesado do time %.0f eh: %.2f \n", peso - 1,
		      maisPesado);
	      for (idade = 0; idade < 3; idade++)
		{
		  getchar ();
		  printf ("Digite a idade do jogador %.0f: ", idade + 1);
		  scanf ("%f", &leia);

		  idadeMedia = idadeMedia + leia;

		  if (idade == 0)
		    {
		      maisJovem = leia;
		    }

		  if (leia < maisJovem)
		    {
		      maisJovem = leia;
		    }

		  if (idade == 2)
		    {

		      printf ("IDADE MEDIA DO TIME %.0f: %.2f \n", idade - 1,
			      idadeMedia);
		      pesoMedioTimes = pesoMedio + pesoMedioTimes;
		      pesoMedio = pesoMedio / 3;

		      printf ("PESO MEDIO DO TIME %.0f: %.2f \n", idade - 1,
			      pesoMedio);
		      printf ("MAIS JOVEM DO TIME: %.2f \n", maisJovem);
		      idadeMediaTimes = idadeMedia + idadeMediaTimes;
		      idadeMedia = idadeMedia / 3;

		    }
		}
	    }
	}
    }
  idadeMediaTimes = idadeMediaTimes / 15;
  printf ("IDADE MEDIA GLOBAL: %.2f \n", idadeMediaTimes);
  pesoMedioTimes = pesoMedioTimes / 15;
  printf ("PESO MEDIO GLOBAL: %.2f \n", pesoMedioTimes);


  return 0;
}
