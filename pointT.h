template <typename T> class pointT {
protected:
  T x;
  T y;

public:
  pointT(T x, T y);
  pointT(const pointT &p);
  T getX() const;
  void setX(T x);
  T getY() const;
  void setY(T x);
};

template <typename T> pointT<T>::pointT(T x, T y) {
  this->x = x;
  this->y = y;
}

template <typename T> pointT<T>::pointT(const pointT &p) {
  this->x = p.x;
  this->y = p.y;
}

template <typename T> T pointT<T>::getX() const { return this->x; }

template <typename T> void pointT<T>::setX(T x) { this->x = x; }

template <typename T> T pointT<T>::getY() const { return this->y; }

template <typename T> void pointT<T>::setY(T y) { this->y = y; }
