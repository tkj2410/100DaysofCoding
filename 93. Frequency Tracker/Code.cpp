class FrequencyTracker {
public:
    void add(int number) {
        auto it = freqMap.find(number);
        if (it == freqMap.end()) {
            freqMap[number] = 1;
        } else {
            freqMap[number]++;
        }
        freqCountMap[freqMap[number] - 1]--;
        freqCountMap[freqMap[number]]++;
    }

    void deleteOne(int number) {
        auto it = freqMap.find(number);
        if (it != freqMap.end()) {
            freqCountMap[freqMap[number]]--;
            if (--freqMap[number] == 0) {
                freqMap.erase(number);
            } else {
                freqCountMap[freqMap[number]]++;
            }
        }
    }

    bool hasFrequency(int frequency) {
        return freqCountMap.count(frequency) && freqCountMap[frequency] > 0;
    }

private:
    std::unordered_map<int, int> freqMap;
    std::unordered_map<int, int> freqCountMap;
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */