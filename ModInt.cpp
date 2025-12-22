template<int MOD = 1e9 + 7>
struct ModInt {
    int val;
    static const int mod = MOD;
 
    ModInt(long long v = 0) { val = v % mod; if (val < 0) { val += mod; } }
 
    ModInt& operator+=(ModInt const& b) { val += b.val; if (val >= mod) val -= mod; return *this; }
    ModInt& operator-=(ModInt const& b) { val -= b.val; if (val < 0) val += mod; return *this;}
    ModInt& operator*=(ModInt const& b) { val = (long long)val * b.val % mod; return *this;}
    
    friend ModInt mexp(ModInt a, long long e) {
        ModInt res = 1; while (e) { if (e&1) res *= a; a *= a; e >>= 1; }
        return res;
    }
    friend ModInt inverse(ModInt a) { return mexp(a, mod - 2); }
    
    ModInt& operator/=(ModInt const& b) { return *this *= inverse(b); }
    friend ModInt operator+(ModInt a, ModInt const b) { return a += b; }
    friend ModInt operator-(ModInt a, ModInt const b) { return a -= b; }
    friend ModInt operator-(ModInt const a) { return 0 - a; }
    friend ModInt operator*(ModInt a, ModInt const b) { return a *= b; }
    friend ModInt operator/(ModInt a, ModInt const b) { return a /= b; }
    friend std::ostream& operator<<(std::ostream& os, ModInt const& a) {return os << a.val;}
    friend bool operator==(ModInt const& a, ModInt const& b) {return a.val == b.val;}
    friend bool operator!=(ModInt const& a, ModInt const& b) {return a.val != b.val;}
};