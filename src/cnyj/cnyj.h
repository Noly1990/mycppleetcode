#ifndef cnyj
#define cnyj

#include <iostream>
#include <vector>
#include <string>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

namespace cnyj
{

ListNode convertVector2List(std::vector<int> &v);

} // namespace cnyj

#endif