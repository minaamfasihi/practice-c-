#pragma once

template <class T>
class mVector {
	private:
		T* _arr;
		int _size;
		int _cap;
	public:
		mVector(int cap)
		{
			if (cap > 0) _cap = cap;
			else _cap = 0;
			_size = 0;
			_arr = new T[_cap];
		}

		int Size() {
			return _size;
		}

		int Cap() {
			return _cap;
		}

		bool isEmpty() {
			return _size == 0;
		}

		T at(int index) {
			if (index < 0 || index >= _size) return NULL;
			return *(_arr + index);
		}

		void pushBack(T item) {
			if (_size == _cap) {
				_cap *= 2;
				T* newArr = new T[_cap];
				for (int i = 0; i < _size; i++) {
					*(newArr + i) = *(_arr + i);
				}
				delete[] _arr;
				_arr = newArr;
			}
			*(_arr + _size) = item;
			_size++;
		}

		void insert(T item, int index) {
			if (index < 0 || index > _size) return;

			for (int i = _size; i > index; i--) {
				*(_arr + i) = *(_arr + (i - 1));
			}
			*(_arr + index) = item;
			_size++;
		}

		void prepend(T item) {
			insert(item, 0);
		}

		T pop() {
			T t = *(_arr + _size - 1);
			_size--;
			return t;
		}

		void deleteAndShift(int index) {
			if (index < 0 || index == _size) return;
			if (index + 1 != _size) {
				for (int i = index; i + 1 < _size; i++) {
					*(_arr + i) = *(_arr + i + 1);
				}
			}
			_size--;
		}

		void removeItemAll(int item) {

		}

		T find(T item) {
			for (int i = 0; i < _size; i++) {
				if (item == *(_arr + i)) {
					return *(_arr + i);
				}
			}
			return NULL;
		}

		void resize(int newCap) {
			_cap = newCap;
			T* newArr = new T[_cap];
			for (int i = 0; i < _size; i++) {
				*(newArr + i) = *(_arr + i);
			}
			delete[] _arr;
			_arr = newArr;
		}

		void print() {
			cout << "------Vector------" << endl;
			for (int i = 0; i < _size; i++) {
				cout << *(_arr + i) << endl;
			}
		}
};