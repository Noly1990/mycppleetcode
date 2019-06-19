#include "cnyj.h"

namespace cnyj
{
cnyj ::ListNode convertVector2List(std::vector<int> &v)
{
  if (v.size() == 1)
  {
    ListNode *head = new ListNode(v[0]);
    return *head;
  }
  else
  {

    auto it = v.begin();

    ListNode *temp = new ListNode(*it);
    ListNode *head = temp;
    while (it != v.end())
    {
      it++;
      temp->next = new ListNode(*it);
      temp = temp->next;
    }
    return *head;
  }

};
} // namespace cnyj
