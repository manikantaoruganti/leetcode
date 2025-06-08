impl Solution {
    pub fn lexical_order(n: i32) -> Vec<i32> {
        let mut result = Vec::with_capacity(n as usize);

        fn dfs(curr: i32, n: i32, result: &mut Vec<i32>) {
            if curr > n {
                return;
            }
            result.push(curr);
            for i in 0..=9 {
                let next = curr * 10 + i;
                if next > n {
                    break;
                }
                dfs(next, n, result);
            }
        }

        for i in 1..=9 {
            if i > n {
                break;
            }
            dfs(i, n, &mut result);
        }

        result
    }
}
