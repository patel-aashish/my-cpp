#include <iostream>
#include <vector>

class MyQueue {
 private:
  // store elements
  std::vector<int> data_;
  int max_len_;

 public:
  MyQueue() { max_len_ = 10; }
  MyQueue(int max_len) { max_len_ = max_len; }
  ~MyQueue() { data_.clear(); }
  /** Insert an element into the queue. Return true if the operation is
   * successful. */
  bool enQueue(int x) {
    if (isFull()) {
      std::cout << "Queue is full! Cannot enqueue: " << x << std::endl;
      return false;
    }
    data_.push_back(x);
    return true;
  }
  /** Removes and returns element from the front of the queue. Returns -1 if
   * queue is empty **/
  int deQueue() {
    int val = -1;
    if (isEmpty()) {
      std::cout << "Queue is empty! Cannot dequeue" << std::endl;
      return val;
    }
    val = data_[0];
    data_.erase(data_.begin());
    return val;
  };

  /** Checks whether the queue is empty or not. */
  bool isEmpty() { return (data_.size() == 0); }
  bool isFull() { return (data_.size() == max_len_); }
};

int main() {
  MyQueue q(2);
  q.enQueue(5);
  q.enQueue(3);
  q.enQueue(2);
  auto v = q.deQueue();
  if (v != -1) {
    std::cout << v << std::endl;
  }
  v = q.deQueue();
  if (v != -1) {
    std::cout << v << std::endl;
  }
  v = q.deQueue();
  if (v != -1) {
    std::cout << v << std::endl;
  }
  return 0;
}