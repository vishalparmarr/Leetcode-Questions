WITH 
    First_day AS (
        SELECT 
            a.player_id,  -- Select the player ID
            MIN(a.event_date) AS min_date  -- Find the minimum (earliest) login date, which is the first day they logged in
        FROM
            Activity AS a  -- From the Activity table where player activities are logged                
        GROUP BY 
            a.player_id  -- Group the results by player ID to process each player individually
    ),
    
    -- Define another CTE to identify players who logged in exactly one day after their first login
    Second_day AS (
        SELECT 
            a.player_id  -- Select the player ID
        FROM
            Activity AS a  -- From the Activity table
        JOIN 
            First_day AS f ON  -- Join with the First_day CTE
            a.player_id = f.player_id AND  -- Match the same player
            a.event_date = DATE_ADD(f.min_date, INTERVAL 1 DAY)  -- Check if the event date is exactly one day after their first login
        GROUP BY 
            a.player_id  -- Group the results by player ID to ensure each player is counted only once
    )

-- Calculate the fraction of players who logged in again the day after their first login
SELECT 
   ROUND(
       COUNT(DISTINCT s.player_id) /  -- Count the distinct player IDs from Second_day (players who logged in the next day)
       (SELECT COUNT(DISTINCT player_id) FROM First_day),  -- Divide by the total number of distinct players who logged in for the first time
       2  -- Round the result to two decimal places
   ) AS fraction
FROM 
    Second_day AS s  -- From the Second_day CTE