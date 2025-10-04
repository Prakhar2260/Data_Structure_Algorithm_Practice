int maxArea(int* height, int heightSize) 
{
  int len=heightSize;

  int left=0;
  int right=len-1;
  int area=0;

  while(left<right)
   {
    int h,width,newarea;

    h=(height[left]<height[right]) ? height[left] : height[right];
    width=right-left;
    newarea=h*width;

     if(newarea>area)
      area=newarea;

     if(height[left]<height[right])
      left++;

     else 
      right--;      
   } 
    return area;   
}
