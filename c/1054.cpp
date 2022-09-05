int main(void) {
  int a, b;
  scanf(" %d %d", &a, &b);
  switch(a){
    case 1:
      if(b==1){
        printf("1");
      }
      else{
        printf("0");
      }
      break;
    default:
      printf("0");
      break;
    }
  
}
