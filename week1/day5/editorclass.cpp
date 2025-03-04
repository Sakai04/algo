#include <iostream>
#include <string>
using namespace std;

template<typename T>
class List {
private:
    // 이중 연결 리스트의 노드 구조체
    struct Node {
        T data;
        Node* prev;
        Node* next;
        Node(const T &value = T()) : data(value), prev(nullptr), next(nullptr) {}
    };

    Node* head; // 더미 헤드 노드
    Node* tail; // 더미 테일 노드

public:
    // 이터레이터 클래스 정의
    class iterator {
    private:
        Node* node;
    public:
        iterator(Node* n) : node(n) {}

        T& operator*() { return node->data; }
        iterator& operator++() { // 전위 증가
            node = node->next;
            return *this;
        }
        iterator operator++(int) { // 후위 증가
            iterator temp = *this;
            node = node->next;
            return temp;
        }
        iterator& operator--() { // 전위 감소
            node = node->prev;
            return *this;
        }
        iterator operator--(int) {
            iterator temp = *this;
            node = node->prev;
            return temp;
        }
        bool operator==(const iterator &other) const {
            return node == other.node;
        }
        bool operator!=(const iterator &other) const {
            return node != other.node;
        }
        // 내부에서 List가 필요하므로 friend 선언
        friend class List;
    };

    // 생성자: 더미 노드 생성 및 초기화
    List() {
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }

    // 소멸자: 모든 노드 삭제
    ~List() {
        clear();
        delete head;
        delete tail;
    }

    // 모든 노드 제거
    void clear() {
        Node* current = head->next;
        while (current != tail) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head->next = tail;
        tail->prev = head;
    }

    // 리스트의 맨 앞에 새 노드 추가
    void push_front(const T &value) {
        insert(begin(), value);
    }

    // 리스트의 맨 뒤에 새 노드 추가
    void push_back(const T &value) {
        insert(end(), value);
    }

    // iterator pos 앞에 새 노드 삽입, 새 노드의 iterator 반환
    iterator insert(iterator pos, const T &value) {
        Node* posNode = pos.node;
        Node* newNode = new Node(value);
        newNode->prev = posNode->prev;
        newNode->next = posNode;
        posNode->prev->next = newNode;
        posNode->prev = newNode;
        return iterator(newNode);
    }

    // pos 위치의 노드 삭제, 삭제 후 다음 노드의 iterator 반환
    iterator erase(iterator pos) {
        Node* posNode = pos.node;
        if (posNode == head || posNode == tail) return pos; // 더미 노드 삭제 불가
        Node* retNode = posNode->next;
        posNode->prev->next = posNode->next;
        posNode->next->prev = posNode->prev;
        delete posNode;
        return iterator(retNode);
    }

    // begin(), end() 함수 제공 (range-based for 지원)
    iterator begin() { return iterator(head->next); }
    iterator end() { return iterator(tail); }
};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string init;
    cin >> init;
    List<char> L;
    for (auto c : init) {
        L.push_back(c);
    }
    
    auto cursor = L.end();
    int q;
    cin >> q;
    while (q--) {
        char op;
        cin >> op;
        if (op == 'P') {
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if (op == 'L') {
            if (cursor != L.begin()) {
                cursor--;
            }
        }
        else if (op == 'D') {
            if (cursor != L.end()) {
                cursor++;
            }
        }
        else if (op == 'B') { // 백스페이스 연산
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for (auto c : L) {
        cout << c;
    }
    cout << "\n";
    return 0;
}