void jarjesta( Kirjainpari taulukko[], int koko )
{

  // Jarjestetaan taulukko siten, etta jokaisella kierroksella
  // valitaan alkio, joka kuuluu taulukossa seuraavaksi ja 
  // siirretaan se oikealle paikalleen.
  for( int i = 0; i < koko; ++i )
    {
      cout << "Hello World";
      // Etsitaan pienin eli lahinna aakkosten alkua oleva
      // kirjain lopputaulukosta
      int pienimmanKohta = i;
      for( int j = i; j < koko; ++j )
	{
	  if( taulukko[ j ].korvattava
	      < taulukko[ pienimmanKohta ].korvattava )
	    {
	      pienimmanKohta = j;
	    }
	}
      // Vaihdetaan pienin alkio omalle paikalleen
      Kirjainpari tmp            = taulukko[ i ];
      taulukko[ i ]              = taulukko[ pienimmanKohta ];
      taulukko[ pienimmanKohta ] = tmp;
    }
  return;
}

