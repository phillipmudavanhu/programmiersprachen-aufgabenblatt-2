#include "color.hpp"

//A Class has viable and methods that are private by default but a stauct has public by default. 

/*A data transfer object (DTO) is an object that carries data between processes.
 The motivation for its use is that communication between processes is usually done resorting to remote interfaces 
 (e.g., web services), where each call is an expensive operation.
  Because the majority of the cost of each call is related to the round-trip time between the client and the server, 
  one way of reducing the number of calls is to use an object (the DTO) that aggregates the data that would have 
  been transferred by the several calls, but that is served by one call only.*/

Color::Color(): red{0}, green{0}, blue{0}{

}

Color::Color(float r): red{r}, green{r}, blue{r}{

}

Color::Color(float red, float green, float blue){

}
