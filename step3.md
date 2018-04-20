Ini bagian Horizontal Kiri udah diuji coba 

//Cari Horizontal Ke Kiri>>>>>
		
		for(j=14;j>=0;j--){
			for(k=14;k>=0;k--){
				if (fndwrds[l]==word[j][k])	{
					l++;
				}else{
					if(word[j][k]==word[j][k+1]){
						
					}else{
						l=0;
					}
				}
				if(l==nf){
					goto selesaifor;
				}
				
										}
									  }
                    
                    
ini bagian Horizontal yang kanan

// Horizontal Kanan >>>			
			for(j=0;j<=15;j++){
			for(k=0;k<=15;k++){
				if (fndwrds[l]==word[j][k])	{
					l++;
				}else{
					if(word[j][k]==word[j][k-1]){
						
					}else{
						l=0;
					}
				}
				if(l+1==nf){
					goto selesaifor;
				}
				
										}
										}
