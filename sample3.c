define fizz;
define buzz;
define fizzbuzz;
define others;
define i;

fizz = 0; 
buzz = 0;
fizzbuzz = 0; 
others = 0;
i = 1;
while(i < 31){
  if ((i % 15) == 0){
    fizzbuzz = fizzbuzz + 1;
  }
  else if ((i % 3) == 0){
    fizz = fizz + 1;
  }
  else if ((i % 5) == 0){
    buzz = buzz + 1;
  } else {
    others = others + 1;
  }
  i = i + 1;
 }
