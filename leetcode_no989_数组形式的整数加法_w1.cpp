/* ------------------------------------------------------------------|
���ڷǸ����� X ���ԣ�X ��������ʽ��ÿλ���ְ������ҵ�˳���γɵ����顣���磬��� X = 1231����ô��������ʽΪ [1,2,3,1]��

�����Ǹ����� X ��������ʽ A���������� X+K ��������ʽ��



ʾ�� 1��

���룺A = [1,2,0,0], K = 34
�����[1,2,3,4]
���ͣ�1200 + 34 = 1234
ʾ�� 2��

���룺A = [2,7,4], K = 181
�����[4,5,5]
���ͣ�274 + 181 = 455
ʾ�� 3��

���룺A = [2,1,5], K = 806
�����[1,0,2,1]
���ͣ�215 + 806 = 1021
ʾ�� 4��

���룺A = [9,9,9,9,9,9,9,9,9,9], K = 1
�����[1,0,0,0,0,0,0,0,0,0,0]
���ͣ�9999999999 + 1 = 10000000000|
-------------------------------------------------------------------*/

/*	˫ָ�뷨
*
*	ִ����ʱ��40 ms, ������ C++ �ύ�л�����93.00%���û�
*	�ڴ����ģ�27.6 MB, ������ C++ �ύ�л�����8.24%���û�
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

vector<int> addToArrayForm(vector<int>& A, int K) {
    //reverse(A.begin(),A.end());
    //vector<int> res;
    //vector<int> k;
    //while (K) {
    //    int ans = K % 10;
    //    K /= 10;
    //    k.emplace_back(ans);
    //}
    //int len = max(A.size(), k.size());
    //A.resize(len);
    //k.resize(len);
    //int carry = 0;
    //for (int i = 0; i < len; i++) {
    //    int tmp = A[i] + k[i] + carry;
    //    carry = tmp / 10;
    //    tmp %= 10;
    //    res.emplace_back(tmp);
    //}
    //if (carry) {
    //    res.emplace_back(carry);
    //}
    //reverse(res.begin(), res.end());
    //return res;


    //reverse(A.begin(), A.end());
    //int carry = 0;
    //int len = A.size();
    //while (K || len) {
    //    if (len) {
    //        int ans = K % 10 + A[A.size() - len] + carry;
    //        K /= 10;
    //        carry = ans / 10;
    //        ans %= 10;
    //        A[A.size() - len] = ans;
    //        len--;
    //    }
    //    else {
    //        int ans = K % 10 + carry;
    //        K /= 10;
    //        carry = ans / 10;
    //        ans %= 10;
    //        A.emplace_back(ans);
    //    }
    //}
    //if (carry) {
    //    A.emplace_back(carry);
    //}
    //reverse(A.begin(), A.end());
    //return A;


    vector<int> res;
    int n = A.size();
    for (int i = n - 1; i >= 0 || K > 0; i-- , K /= 10) {
        if (i >= 0) {
            K += A[i];
        }
        res.emplace_back(K % 10);
    }
    reverse(res.begin(), res.end());
    return res;
}