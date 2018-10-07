
void main(void)
{
    int counter=0,a,b,c,d,r=100;
    for(a=0;a<=2;a++){
    for(b=0;b<=5;b++){
    for(c=0;c<=20;c++){
    for(d=0;d<=50;d++){
    if(r==(a*50+b*20+c*5+d*2))
    counter++;
	}}}}
    printf("Sposobov nabora - %d", counter);
}

