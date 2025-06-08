defmodule Solution do
  @spec two_sum(nums :: [integer], target :: integer) :: [integer]
  def two_sum(nums, target) do
    nums
    |> Enum.with_index()
    |> Enum.reduce_while(%{}, fn {num, idx}, map ->
      complement = target - num
      case Map.get(map, complement) do
        nil -> {:cont, Map.put(map, num, idx)}
        complement_idx -> {:halt, [complement_idx, idx]}
      end
    end)
  end
end
