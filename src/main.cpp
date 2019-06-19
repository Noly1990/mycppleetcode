#include <iostream>
#include <string>
#include <vector>
#include "./cnyj/cnyj.h"

using namespace std;

class Solution
{
public:
  cnyj ::ListNode *addTwoNumbers(cnyj ::ListNode *l1, cnyj ::ListNode *l2)
  {
    return new cnyj::ListNode(0);
  }
};

int main()
{

  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {4, 5, 6};

  cnyj::ListNode l =cnyj::convertVector2List(v1);

  // Solution so;
  cout << l.val << endl;
  system("pause");
  return 0;
}