let p=100,c=100,b=100,m=100,com=100;
let per=((p+c+b+m+com)/500)*100;
if(per>=90){
  console.log('A')
}else if(per>=80){
  console.log('B')
}else if(per>=70){
  console.log('C')
}else if(per>=60){
  console.log('D')
}else if(per>=40){
  console.log('E')
}else{
  console.log('F')
}