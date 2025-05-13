class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
        $map = [];

        foreach ($nums as $i => $num) {
            $complement = $target - $num;
            if (isset($map[$complement])) {
                return [$map[$complement], $i];
            }
            $map[$num] = $i;
        }

        return []; 
    }
}
