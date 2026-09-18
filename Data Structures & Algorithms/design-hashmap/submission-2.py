class MyHashMap:

    def __init__(self):
        self.mp = {}

    def put(self, key: int, value: int) -> None:
        self.mp[key] = value

    def get(self, key: int) -> int:
        if key in self.mp:
            return self.mp[key]

        return -1

    def remove(self, key: int) -> None:
        if key in self.mp:
            del self.mp[key]