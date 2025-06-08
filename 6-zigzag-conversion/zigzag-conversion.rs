impl Solution {
    pub fn convert(s: String, num_rows: i32) -> String {
        let n = s.len() as i32;
        if num_rows == 1 || num_rows >= n {
            return s;
        }

        let mut rows = vec![String::new(); num_rows as usize];
        let mut current_row = 0;
        let mut going_down = false;

        for ch in s.chars() {
            rows[current_row as usize].push(ch);
            if current_row == 0 || current_row == num_rows - 1 {
                going_down = !going_down;
            }
            if going_down {
                current_row += 1;
            } else {
                current_row -= 1;
            }
        }

        rows.concat()
    }
}
