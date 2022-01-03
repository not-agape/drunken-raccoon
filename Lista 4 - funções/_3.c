//escreva apenas a função!
float converteVelocidade(float v, char c){
    
    if (v < 0)
        return 0;        
    
    switch (c){
        case 'k':
            return (v /3.6);
        break;
        
        case 'm':
            return (v *3.6);
        break;
        
        default:
            return 0;
        break;
    }
    
}