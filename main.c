/*
 * Minimized 8-bit register version (175 Bytes)
 *
 * For the verbose version, see main_verbose_175bytes.c
 * */

char d[999],*p=d,c,a,**v;*n;main(o,i){for(v=i+4;c=*v[0]++;)a=c%7,n?c&64?n+=1-a:0:c-93?a?c&1?*p+=2-a:c&16?p+=a-5:a-4?*p=getchar():putchar(*p):*p?main(*v,i):n++:*p?*v=o:0;--*v;}

/*
 * Minimized 8-bit register version (179 Bytes)
 *
 * For the verbose version, see main_verbose_179bytes.c
 * */

char d[999],*p=d,c,a,**v;*n;main(o,i){for(v=i;c=*v[1]++;)a=c%7,n?c&64?n+=1-a:0:c-93?a?c&1?*p+=2-a:c&16?p+=a-5:a-4?*p=getchar():putchar(*p):*p?main(v[1],i):n++:*p?v[1]=o:0;v[1]--;}

/*
 * Minimized 32-bit register version (189 Bytes)
 *
 * For the verbose version, see main_verbose_189bytes.c
 * */

//d[999],*p=d,c=1,o,n,*b,a;main(j,i){while(c&&(c=((char*)1[b=i])[o++])){a=c&2;b=c&1;n?n-=c&64?1-a:0:c&16?!b?p-=1-a:a?*p?c=main(o,i)|1:n++:*p?o=j:(c=0):b?*p-=1-a:!a?*p=getchar():putchar(*p);}}


/*
 * Minimized 8-bit register version (192 Bytes)
 *
 * For the verbose version, see main_verbose_189bytes.c
 * */

//char d[999],*p=d,c=1,*t;o,n,*b,a;main(j,i){while(c&&(c=(t=1[b=i])[o++])){a=c&2;b=c&1;n?n-=c&64?1-a:0:c&16?!b?p-=1-a:a?*p?c=main(o,i)|1:n++:*p?o=j:(c=0):b?*p-=1-a:!a?*p=getchar():putchar(*p);}}
