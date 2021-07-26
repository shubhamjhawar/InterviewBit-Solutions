//https://www.interviewbit.com/problems/search-for-a-range/

vector<int> Solution::searchRange(const vector<int> &A, int B)
{

  int target = B;
  if (A.size() == 0)
    return {-1, -1};

  //first position
  //predicate is x > = target
  //ffttttt type
  // finding first T
  int n = A.size();
  int low = 0, high = n - 1;
  int mid;
  vector<int> res;

  while (low < high)
  {
    mid = low + (high - low) / 2;

    //  Dry run of the example 1 (0 + 5)/2 = 2 then value of low becomes 3 , high = 5 ,mid  == 4 ,high = 4,then in the last iteration we get the result as follows;
    if (A[mid] >= target)
    {
      high = mid;
    }
    else
      low = mid + 1;
  }

  if (A[low] != target)
  {
    return {-1, -1};
  }

  else
  {
    res.push_back(low);
  }

  //last position
  // FFTTTTT
  //A[x] > target;

  low = 0, high = n - 1;

  while (low < high)
  {

    mid = low + (high - low + 1) / 2; // 0 and 5 is index in eg 1; low = 3 index and high is still 5 ; low becomes equal to 4;

    if (A[mid] > target)
    {
      high = mid - 1;
    }
    else
      low = mid;
  }

  //sanity check

  res.push_back(low);

  return res;
}
