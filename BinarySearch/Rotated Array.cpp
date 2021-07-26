//Rotated Array
//https://www.interviewbit.com/problems/rotated-array/

int Solution::findMin(const vector<int> &A)
{

  //F*T*
  //p(x) = nums[x] < nums[0]
  //First T
  int mid, low, high;
  low = 0;
  int n = A.size();
  high = n - 1;

  while (low < high)
  {

    mid = low + (high - low) / 2;

    if (A[mid] < A[0])
      high = mid;
    else
      low = mid + 1;
  }

  if (A[low] < A[0])
    return A[low];
  else
    return A[0];
    
}
