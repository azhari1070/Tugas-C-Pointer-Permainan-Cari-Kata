 for(int dn = 0 ; dn < 15 ; dn++){
            for(int i=0; i<=(15-panjang_kata); i++) {
            dgnl=-1;
                for(int j=i; j<=i+(panjang_kata-1); j++) {
                    ++dgnl;
                    if(*(*(Y+j)+dn+dgnl) == kata[m][x]) ada[x] = 1;
                    else ada[x] = 0;
                    x++;
                }
                for(int k=0; k<panjang_kata; k++) {
                    if(ada[k]==1) {
                        result = 1;
                        hasil[m]+=result;
                    }
                    else {
                        result = 0;
                        break;
                    }
                    if(hasil[m]==panjang_kata) { 
                        hasil_akhir[m]=1; 
                        goto next; 
                    }
                }
                hasil[m]=0;
                x=0;
            }
        }

        for(int dr = 14 ; dr >= 0 ; dr--){
            for(int i=0; i<=(15-panjang_kata); i++) {
            dgnl=-1;
                for(int j=i; j<=i+(panjang_kata-1); j++) {
                    ++dgnl;
                    if(*(*(Y+j)+dr-dgnl) == kata[m][x]) ada[x] = 1;
                    else ada[x] = 0;
                    x++;
                }
                for(int k=0; k<panjang_kata; k++) {
                    if(ada[k]==1) {
                        result = 1;
                        hasil[m]+=result;
                    }
                else {
                        result = 0;
                        break;
                    }
                if(hasil[m]==panjang_kata) { 
                        hasil_akhir[m]=1; 
                        goto next; 
                    }
                }
                hasil[m]=0;
                x=0;
            }
        }
        next:
        x=0;
    }

    cout<<endl<<"Hasil pencarian kata : "<<endl;
    for(int a=0; a<jum_kata; a++) {
        if(hasil_akhir[a]==1)
        {
            cout<<a+1<<". ADA"<<endl;
        }
        else cout<<a+1<<". TIDAK ADA"<<endl;
    }
    return 0;
}
