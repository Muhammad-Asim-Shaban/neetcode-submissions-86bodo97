import numpy as np
from numpy.typing import NDArray


class Solution:

    def softmax(self, z: NDArray[np.float64]) -> NDArray[np.float64]:
        # z is a 1D NumPy array of logits
        # Hint: subtract max(z) for numerical stability before computing exp
        # return np.round(your_answer, 4)
        maxi=np.max(z)
        n=len(z)
        ans=[]
        for i in range(n):
            value = z[i]-maxi 
            one = np.exp(value)
            second=0.0
            for j in range(n):
                new_value=z[j]-maxi 
                second = second + np.exp(new_value)
            
            app=np.round(one/second,4) 

            ans.append(app)
        
        return ans
