/*
  Faça uma função mediaGlobal que recebe [[Float]] e devolve a média das médias de todas as listas
*/

func mediaList (_ xs:[Float]) -> Float {
    return xs.reduce(0.0,+)/Float(xs.count)
}

func mediaGlobal(_ xss: [[Float]]) -> Float {
    return mediaList(xss.map{mediaList($0)})
}

print(mediaGlobal([[2,2,2],[6,6,6],[2,2,2],[6,6,6]]))
