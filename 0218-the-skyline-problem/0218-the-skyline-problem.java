class Solution {
    Queue<int[]> queue;

    public List<List<Integer>> getSkyline(int[][] buildings) {
        List<List<Integer>> result = new ArrayList<>();
        Map<Integer, List<int[]>> heights = new TreeMap<>();
        Set<Integer> pointsOnXAxis = new TreeSet<>();
        queue = new PriorityQueue<>((a, b) -> {
            if(b[1]-a[1]==0){
                return a[0]-b[0];
            }
            return b[1]-a[1];
        });
        for (int[] building : buildings) {
            int start = building[0];
            int end = building[1];
            int height = building[2];
            
            List<int[]> existingHeights=heights.getOrDefault(start, new ArrayList<>());
            existingHeights.add(new int[] { end, height });
            heights.put(start, existingHeights);
            
            pointsOnXAxis.add(start);
            pointsOnXAxis.add(end);
        }
        int previousHeight = 0;
        for (Integer pointOnXAxis : pointsOnXAxis) {
            if (!heights.getOrDefault(pointOnXAxis, new ArrayList<>()).isEmpty()) {
                for(int[] height:heights.get(pointOnXAxis))
                    queue.offer(height);
            }
            while (!queue.isEmpty() && queue.peek()[0] <= pointOnXAxis) {
                queue.poll();
            }
            if (queue.isEmpty()) {
                result.add(Arrays.asList(pointOnXAxis, 0));
                previousHeight = 0;
            } else if (previousHeight != queue.peek()[1]) {
                result.add(Arrays.asList(pointOnXAxis, queue.peek()[1]));
                previousHeight = queue.peek()[1];
            }
        }
        return result;
    }
}