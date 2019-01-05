struct rectangle {
  float left;
  float bottom;
  float right;
  float top;
}
  typedef struct rectangle rect;

//to find the intersection of two rectangle r1 and r2

rect intersection_of_two_rectangle(rect r1, rect r2){

  //make a rectangle result
  rect ans;
  
  //the resultant rectangle left is max of left of r1 and r2
  ans.left=max(r1.left, r2.left);

  //the resultant rectangle bottom is max of bottom of r1 and r2
  ans.bottom=max(r1.bottom, r2.bottom);
  
  // the resultant rectangle top is minimum of top of r1 and r2
  ans.top = minimum(r1.top, r2.top);
  
  //the resultant rectangle right is minimum of right of r1 and r2.
  ans.right=minimum(r1.right, r2.right);

  //now return the resultant rectangle
  return ans;
}


//declare function that find the maximum of two numbers
float max(float n1, float n2){
  if (n1>n2){
    return n1;
  }
  else{
    return n2;
  }
}

//declare function that find minimum  of two numbers
float minimum(float n1, float n2){
  if (n1<n2){
    return n1;
  }
  else{
    return n2;
  }
}
