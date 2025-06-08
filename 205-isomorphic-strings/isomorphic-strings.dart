class Solution {
  bool isIsomorphic(String s, String t) {
    if (s.length != t.length) return false;

    Map<String, String> mapST = {};
    Map<String, String> mapTS = {};

    for (int i = 0; i < s.length; i++) {
      String c1 = s[i];
      String c2 = t[i];

      if (mapST.containsKey(c1)) {
        if (mapST[c1] != c2) return false;
      } else {
        mapST[c1] = c2;
      }

      if (mapTS.containsKey(c2)) {
        if (mapTS[c2] != c1) return false;
      } else {
        mapTS[c2] = c1;
      }
    }

    return true;
  }
}
